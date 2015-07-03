
typedef struct								//使用位域，能够减少出错
{
		//U8 PR_TYPE_SubT;
		U8 PR : 2;
		U8 TYPE : 2;
		U8 SubT : 4;
		U8 rcv_addr;
		U8 snd_addr;
		U8 dst_addr;
		U8 src_addr;
		//U8 SEQ_H;
		U8 SEQ : 7;
		U8 H : 1;
		//U8 SN_TTL;
		U8 SN : 4;
		U8 TTL : 4;
		//U8 CoS_ACK_Rev;					//ACK和REV在HIGHMAC部分处理
		U8 CoS : 3;
		U8 ACK : 1;
		U8 Rev : 4;
		char data[MAX_PACKAGE_DATA_LENGTH];
		unsigned int CRC;
}nl_package_t;
