//#########################################################################
//#########################################################################
//#          THIS IS AN AUTOGENERATED FILE, DO NOT EDIT MANUALLY          #
//#########################################################################
//#########################################################################


#pragma pack(1)

#include "Platform.h"
//#define offsetof(s,m)   (UINT64)&(((s *)0)->m)

typedef struct _INTERRUPT {
		UINT32 InterruptFlags;
		UINT32 GSIV;
}INTERRUPT;



typedef struct _SIDMAPPING {
		UINT32 InputBase;
		UINT32 NumIDs;
		UINT32 OutputBase;
		UINT32 OutputReference;
		UINT32 Flags;
}SIDMAPPING;



typedef struct _SMMUV2NODE_SMMU_APPS{
	UINT8 Type;
	UINT16 Length;
	UINT8 Revision;
	UINT32 Reserved;
	UINT32 NumberofMappings;
	UINT32 MappingsOffset;
	UINT64 BaseAddress;
	UINT64 Span;
	UINT32 Model;
	UINT32 Flags;
	UINT32 GlobalIntOffset;
	UINT32 NumContextInterrupts;
	UINT32 ContextIntOffset;
	UINT32 NumPMUInterrupts;
	UINT32 PMUIntOffset;
	UINT32 NSGIRPT_GSIV;
	UINT32 NSGIRPT_FLAGS;
	UINT32 NSGCFGIRPT_GSIV;
	UINT32 NSGCFGIRPT_FLAGS;
	INTERRUPT ContextInterrupts[64];
	INTERRUPT PMUInterrupts[8];
	SIDMAPPING SIDMappings[1];
}SMMUV2NODE_SMMU_APPS;

#define SMMUV2NODE_SMMU_APPS_VAR  {		\
	.Type	=	3,		\
	.Length	=	sizeof(SMMUV2NODE_SMMU_APPS),		\
	.Revision	=	1,		\
	.Reserved	=	0,		\
	.NumberofMappings	=	1,		\
	.MappingsOffset	=	offsetof(SMMUV2NODE_SMMU_APPS,SIDMappings),		\
	.BaseAddress	=	0x15000000,		\
	.Span	=	0x80000,		\
	.Model	=	3,		\
	.Flags	=	3,		\
	.GlobalIntOffset	=	offsetof(SMMUV2NODE_SMMU_APPS,NSGIRPT_GSIV),		\
	.NumContextInterrupts	=	64,		\
	.ContextIntOffset	=	offsetof(SMMUV2NODE_SMMU_APPS,ContextInterrupts),		\
	.NumPMUInterrupts	=	8,		\
	.PMUIntOffset	=	offsetof(SMMUV2NODE_SMMU_APPS,PMUInterrupts),		\
	.NSGIRPT_GSIV	=	97,		\
	.NSGIRPT_FLAGS	=	0,		\
	.NSGCFGIRPT_GSIV	=	99,		\
	.NSGCFGIRPT_FLAGS	=	0,		\
	.ContextInterrupts	={		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	128,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	129,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	130,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	131,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	132,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	133,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	134,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	135,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	136,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	137,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	138,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	139,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	140,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	141,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	142,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	143,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	144,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	145,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	146,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	147,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	148,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	149,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	150,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	213,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	214,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	215,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	216,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	217,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	218,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	219,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	220,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	221,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	222,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	223,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	224,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	347,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	348,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	349,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	350,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	351,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	352,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	353,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	354,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	355,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	356,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	357,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	358,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	359,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	360,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	361,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	362,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	363,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	364,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	365,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	366,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	367,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	368,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	369,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	370,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	371,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	372,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	373,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	374,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	375,		\
		},		\
	},		\
	.PMUInterrupts	={		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	100,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	101,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	102,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	103,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	104,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	105,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	126,		\
		},		\
		{		\
		.InterruptFlags	=	0,		\
		.GSIV	=	127,		\
		},		\
	},		\
	.SIDMappings	={		\
		{		\
		.InputBase	=	0x0,		\
		.NumIDs	=	16,		\
		.OutputBase	=	0xA0,		\
		.OutputReference	=	0,		\
		.Flags	=	0,		\
		},		\
	},		\
}

typedef struct _NAMEDNODE_SDC1{
	UINT8 Type;
	UINT16 Length;
	UINT8 Revision;
	UINT32 Reserved;
	UINT32 NumberofMappings;
	UINT32 MappingsOffset;
	UINT32 NodeFlags;
	UINT32 CacheCoherency;
	UINT8 AllocationHints;
	UINT16 Reserved1;
	UINT8 MemAccessFlags;
	UINT8 DeviceMemAddressSize;
	UINT8 DevObjectName[32];
	SIDMAPPING SIDMappings[1];
}NAMEDNODE_SDC1;

#define NAMEDNODE_SDC1_VAR  {		\
	.Type	=	1,		\
	.Length	=	sizeof(NAMEDNODE_SDC1),		\
	.Revision	=	1,		\
	.Reserved	=	0,		\
	.NumberofMappings	=	1,		\
	.MappingsOffset	=	offsetof(NAMEDNODE_SDC1,SIDMappings),		\
	.NodeFlags	=	0,		\
	.CacheCoherency	=	0,		\
	.AllocationHints	=	0,		\
	.Reserved1	=	0,		\
	.MemAccessFlags	=	0,		\
	.DeviceMemAddressSize	=	36,		\
	.DevObjectName	=	"\\_SB_.SDC1",		\
	.SIDMappings	={		\
		{		\
		.InputBase	=	0x0,		\
		.NumIDs	=	16,		\
		.OutputBase	=	0x140,		\
		.OutputReference	=	offsetof(IORT,SMMUV2Nodes_smmu_apps),		\
		.Flags	=	0,		\
		},		\
	},		\
}

typedef struct _NAMEDNODE_SDC2{
	UINT8 Type;
	UINT16 Length;
	UINT8 Revision;
	UINT32 Reserved;
	UINT32 NumberofMappings;
	UINT32 MappingsOffset;
	UINT32 NodeFlags;
	UINT32 CacheCoherency;
	UINT8 AllocationHints;
	UINT16 Reserved1;
	UINT8 MemAccessFlags;
	UINT8 DeviceMemAddressSize;
	UINT8 DevObjectName[32];
	SIDMAPPING SIDMappings[1];
}NAMEDNODE_SDC2;

#define NAMEDNODE_SDC2_VAR  {		\
	.Type	=	1,		\
	.Length	=	sizeof(NAMEDNODE_SDC2),		\
	.Revision	=	1,		\
	.Reserved	=	0,		\
	.NumberofMappings	=	1,		\
	.MappingsOffset	=	offsetof(NAMEDNODE_SDC2,SIDMappings),		\
	.NodeFlags	=	0,		\
	.CacheCoherency	=	0,		\
	.AllocationHints	=	0,		\
	.Reserved1	=	0,		\
	.MemAccessFlags	=	0,		\
	.DeviceMemAddressSize	=	36,		\
	.DevObjectName	=	"\\_SB_.SDC2",		\
	.SIDMappings	={		\
		{		\
		.InputBase	=	0x0,		\
		.NumIDs	=	16,		\
		.OutputBase	=	0xA0,		\
		.OutputReference	=	offsetof(IORT,SMMUV2Nodes_smmu_apps),		\
		.Flags	=	0,		\
		},		\
	},		\
}

typedef struct _NAMEDNODE_SDC4{
	UINT8 Type;
	UINT16 Length;
	UINT8 Revision;
	UINT32 Reserved;
	UINT32 NumberofMappings;
	UINT32 MappingsOffset;
	UINT32 NodeFlags;
	UINT32 CacheCoherency;
	UINT8 AllocationHints;
	UINT16 Reserved1;
	UINT8 MemAccessFlags;
	UINT8 DeviceMemAddressSize;
	UINT8 DevObjectName[32];
	SIDMAPPING SIDMappings[1];
}NAMEDNODE_SDC4;

#define NAMEDNODE_SDC4_VAR  {		\
	.Type	=	1,		\
	.Length	=	sizeof(NAMEDNODE_SDC4),		\
	.Revision	=	1,		\
	.Reserved	=	0,		\
	.NumberofMappings	=	1,		\
	.MappingsOffset	=	offsetof(NAMEDNODE_SDC4,SIDMappings),		\
	.NodeFlags	=	0,		\
	.CacheCoherency	=	0,		\
	.AllocationHints	=	0,		\
	.Reserved1	=	0,		\
	.MemAccessFlags	=	0,		\
	.DeviceMemAddressSize	=	36,		\
	.DevObjectName	=	"\\_SB_.SDC4",		\
	.SIDMappings	={		\
		{		\
		.InputBase	=	0x0,		\
		.NumIDs	=	0x10,		\
		.OutputBase	=	0xC0,		\
		.OutputReference	=	offsetof(IORT,SMMUV2Nodes_smmu_apps),		\
		.Flags	=	0,		\
		},		\
	},		\
}

typedef struct _NAMEDNODE_UFS{
	UINT8 Type;
	UINT16 Length;
	UINT8 Revision;
	UINT32 Reserved;
	UINT32 NumberofMappings;
	UINT32 MappingsOffset;
	UINT32 NodeFlags;
	UINT32 CacheCoherency;
	UINT8 AllocationHints;
	UINT16 Reserved1;
	UINT8 MemAccessFlags;
	UINT8 DeviceMemAddressSize;
	UINT8 DevObjectName[32];
	SIDMAPPING SIDMappings[1];
}NAMEDNODE_UFS;

#define NAMEDNODE_UFS_VAR  {		\
	.Type	=	1,		\
	.Length	=	sizeof(NAMEDNODE_UFS),		\
	.Revision	=	1,		\
	.Reserved	=	0,		\
	.NumberofMappings	=	2,		\
	.MappingsOffset	=	offsetof(NAMEDNODE_UFS,SIDMappings),		\
	.NodeFlags	=	0,		\
	.CacheCoherency	=	0,		\
	.AllocationHints	=	0,		\
	.Reserved1	=	0,		\
	.MemAccessFlags	=	0,		\
	.DeviceMemAddressSize	=	36,		\
	.DevObjectName	=	"\\_SB_.UFS0",		\
	.SIDMappings	={		\
		{		\
		.InputBase	=	0x10,		\
		.NumIDs	=	16,		\
		.OutputBase	=	0x100,		\
		.OutputReference	=	offsetof(IORT,SMMUV2Nodes_smmu_apps),		\
		.Flags	=	0,		\
		},		\
	},		\
}

typedef struct _NAMEDNODE_USB3_0{
	UINT8 Type;
	UINT16 Length;
	UINT8 Revision;
	UINT32 Reserved;
	UINT32 NumberofMappings;
	UINT32 MappingsOffset;
	UINT32 NodeFlags;
	UINT32 CacheCoherency;
	UINT8 AllocationHints;
	UINT16 Reserved1;
	UINT8 MemAccessFlags;
	UINT8 DeviceMemAddressSize;
	UINT8 DevObjectName[32];
	SIDMAPPING SIDMappings[1];
}NAMEDNODE_USB3_0;

#define NAMEDNODE_USB3_0_VAR  {		\
	.Type	=	1,		\
	.Length	=	sizeof(NAMEDNODE_USB3_0),		\
	.Revision	=	1,		\
	.Reserved	=	0,		\
	.NumberofMappings	=	1,		\
	.MappingsOffset	=	offsetof(NAMEDNODE_USB3_0,SIDMappings),		\
	.NodeFlags	=	0,		\
	.CacheCoherency	=	0,		\
	.AllocationHints	=	0,		\
	.Reserved1	=	0,		\
	.MemAccessFlags	=	0,		\
	.DeviceMemAddressSize	=	36,		\
	.DevObjectName	=	"\\_SB_.USB3-0",		\
	.SIDMappings	={		\
		{		\
		.InputBase	=	0x0,		\
		.NumIDs	=	1,		\
		.OutputBase	=	0x740,		\
		.OutputReference	=	offsetof(IORT,SMMUV2Nodes_smmu_apps),		\
		.Flags	=	0,		\
		},		\
	},		\
}

typedef struct _IORT{
	UINT32 Signature;
	UINT32 Length;
	UINT8 Revision;
	UINT8 Checksum;
	UINT8 OEMID[6];
	UINT64 OEMTableID;
	UINT32 OEMRevision;
	UINT32 CreatorID;
	UINT32 CreatorRevision;
	UINT32 NumberofIORTNodes;
	UINT32 IORTNodesOffset;
	UINT32 Reserved;
	SMMUV2NODE_SMMU_APPS SMMUV2Nodes_smmu_apps;
	NAMEDNODE_SDC1 NamedNodes_sdc1;
    NAMEDNODE_SDC2 NamedNodes_sdc2;
	NAMEDNODE_SDC4 NamedNodes_sdc4;
	NAMEDNODE_UFS NamedNodes_ufs;
	NAMEDNODE_USB3_0 NamedNodes_usb3_0;
}IORT;

IORT IORT_TABLE = {		
	.Signature	=	'TROI',		
	.Length	=	sizeof(IORT),		
	.Revision	=	0,		
	.Checksum	=	0,		
	.OEMID	=	ACPI_OEM_ID,		
	.OEMTableID	=	ACPI_OEM_TABLE_ID,		
	.OEMRevision	=	ACPI_OEM_REVISION,		
	.CreatorID	=	ACPI_CREATOR_ID,		
	.CreatorRevision	=	ACPI_CREATOR_REVISION,		
	.NumberofIORTNodes	=	11,		
	.IORTNodesOffset	=	offsetof(IORT,Reserved)+4,		
	.Reserved	=	0,		
	.SMMUV2Nodes_smmu_apps	=	SMMUV2NODE_SMMU_APPS_VAR		,
	.NamedNodes_sdc1	=	NAMEDNODE_SDC1_VAR		,
    .NamedNodes_sdc2	=	NAMEDNODE_SDC2_VAR		,
	.NamedNodes_sdc4	=	NAMEDNODE_SDC4_VAR		,
	.NamedNodes_ufs	=	NAMEDNODE_UFS_VAR		,
	.NamedNodes_usb3_0	=	NAMEDNODE_USB3_0_VAR		,
};

#pragma pack()
