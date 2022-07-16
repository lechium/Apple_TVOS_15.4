//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface VMUVMRegion : NSObject
{
    struct _VMURange range;	// 8 = 0x8
    unsigned int prot;	// 24 = 0x18
    unsigned int maxProt;	// 28 = 0x1c
    NSString *type;	// 32 = 0x20
    NSString *path;	// 40 = 0x28
    _Bool summarized;	// 48 = 0x30
    unsigned char external_pager;	// 49 = 0x31
    unsigned char share_mode;	// 50 = 0x32
    int purgeable;	// 52 = 0x34
    unsigned long long virtual_pages;	// 56 = 0x38
    unsigned long long pages_resident;	// 64 = 0x40
    unsigned long long pages_shared_now_private;	// 72 = 0x48
    unsigned long long pages_swapped_out;	// 80 = 0x50
    unsigned long long pages_dirtied;	// 88 = 0x58
    unsigned long long ref_count;	// 96 = 0x60
    unsigned int user_tag;	// 104 = 0x68
    unsigned long long object_id;	// 112 = 0x70
    unsigned long long offset;	// 120 = 0x78
    unsigned int nesting_depth;	// 128 = 0x80
    unsigned int is_submap:1;	// 132 = 0x84
    unsigned int is_macho_region:1;	// 132 = 0x84
    unsigned int is_unused_data_region:1;	// 132 = 0x84
    unsigned int is_unused_data_page_shared_with_active_content:1;	// 132 = 0x84
    unsigned int is_wired:1;	// 132 = 0x84
    unsigned int reserved_flags:27;	// 132 = 0x84
    unsigned long long mallocBlockCount;	// 136 = 0x88
    unsigned int mallocTypeFlag;	// 144 = 0x90
    unsigned int zone_index;	// 148 = 0x94
    unsigned int coalesced_region_count;	// 152 = 0x98
    unsigned long long resident_size;	// 160 = 0xa0
    unsigned long long shared_now_private_size;	// 168 = 0xa8
    unsigned long long swapped_out_size;	// 176 = 0xb0
    unsigned long long dirty_size;	// 184 = 0xb8
    unsigned long long purgable_vol_size;	// 192 = 0xc0
    unsigned long long purgable_non_vol_size;	// 200 = 0xc8
    unsigned long long purgable_empty_size;	// 208 = 0xd0
    unsigned long long reusable_size;	// 216 = 0xd8
}

+ (id)columnHeadersWithOptions:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2 memorySizeDivisor:(unsigned int)arg3 hasFractionalPageSizes:(_Bool)arg4;	// IMP=0x000000000007e9dd
+ (id)columnHeadersWithOptions:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2;	// IMP=0x000000000007e9c2
+ (void)initialize;	// IMP=0x000000000007e520
- (void).cxx_destruct;	// IMP=0x000000000007f992
- (id)breakAtLength:(unsigned long long)arg1;	// IMP=0x000000000007f85a
- (void)addInfoFromRegion:(id)arg1;	// IMP=0x000000000007f7bc
- (_Bool)hasSameInfoAsRegion:(id)arg1;	// IMP=0x000000000007f761
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007f6ea
- (_Bool)isNullRegion;	// IMP=0x000000000007f6cd
- (_Bool)isWired;	// IMP=0x000000000007f6bc
- (_Bool)isSubmap;	// IMP=0x000000000007f6ae
- (unsigned int)maxProtection;	// IMP=0x000000000007f6a5
- (unsigned int)protection;	// IMP=0x000000000007f69c
- (id)path;	// IMP=0x000000000007f68e
- (id)type;	// IMP=0x000000000007f680
- (unsigned long long)length;	// IMP=0x000000000007f676
- (unsigned long long)address;	// IMP=0x000000000007f66c
- (struct _VMURange)range;	// IMP=0x000000000007f65e
- (id)description;	// IMP=0x000000000007f645
- (id)descriptionWithOptions:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2 memorySizeDivisor:(unsigned int)arg3 hasFractionalPageSizes:(_Bool)arg4;	// IMP=0x000000000007ebae
- (id)descriptionWithOptions:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2;	// IMP=0x000000000007eb93
- (void)getVMRegionDataExtra:(struct _VMUVMRegionDataExtra *)arg1;	// IMP=0x000000000007e9aa
- (void)getVMRegionData:(struct _VMUVMRegionData *)arg1 withSimpleSerializer:(id)arg2;	// IMP=0x000000000007e828
- (void)setVMRegionDataExtra:(struct _VMUVMRegionDataExtra *)arg1;	// IMP=0x000000000007e810
- (id)initWithVMRegionData:(struct _VMUVMRegionData *)arg1 encodedVersion:(long long)arg2 simpleSerializer:(id)arg3 error:(id *)arg4;	// IMP=0x000000000007e59a
- (id)init;	// IMP=0x000000000007e55c

@end

