//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFMemoryInfoMutating-Protocol.h>

@class AFMemoryInfo, NSString;

@interface _AFMemoryInfoMutation : NSObject <AFMemoryInfoMutating>
{
    AFMemoryInfo *_baseModel;	// 8 = 0x8
    unsigned long long _virtualMemorySizeInBytes;	// 16 = 0x10
    int _numberOfRegions;	// 24 = 0x18
    int _pageSizeInBytes;	// 28 = 0x1c
    unsigned long long _residentMemorySizeInBytes;	// 32 = 0x20
    unsigned long long _peakResidentMemorySizeInBytes;	// 40 = 0x28
    unsigned long long _physicalMemoryFootprintInBytes;	// 48 = 0x30
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasVirtualMemorySizeInBytes:1;
        unsigned int hasNumberOfRegions:1;
        unsigned int hasPageSizeInBytes:1;
        unsigned int hasResidentMemorySizeInBytes:1;
        unsigned int hasPeakResidentMemorySizeInBytes:1;
        unsigned int hasPhysicalMemoryFootprintInBytes:1;
    } _mutationFlags;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000f1fe4
- (id)generate;	// IMP=0x00000000000f1e70
- (void)setPhysicalMemoryFootprintInBytes:(unsigned long long)arg1;	// IMP=0x00000000000f1e62
- (void)setPeakResidentMemorySizeInBytes:(unsigned long long)arg1;	// IMP=0x00000000000f1e54
- (void)setResidentMemorySizeInBytes:(unsigned long long)arg1;	// IMP=0x00000000000f1e46
- (void)setPageSizeInBytes:(int)arg1;	// IMP=0x00000000000f1e39
- (void)setNumberOfRegions:(int)arg1;	// IMP=0x00000000000f1e2c
- (void)setVirtualMemorySizeInBytes:(unsigned long long)arg1;	// IMP=0x00000000000f1e1e
- (id)initWithBaseModel:(id)arg1;	// IMP=0x00000000000f1db3
- (id)init;	// IMP=0x00000000000f1d9f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
