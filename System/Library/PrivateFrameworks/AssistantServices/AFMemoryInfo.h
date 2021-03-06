//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@interface AFMemoryInfo : NSObject <NSCopying, NSSecureCoding>
{
    int _numberOfRegions;	// 8 = 0x8
    int _pageSizeInBytes;	// 12 = 0xc
    unsigned long long _virtualMemorySizeInBytes;	// 16 = 0x10
    unsigned long long _residentMemorySizeInBytes;	// 24 = 0x18
    unsigned long long _peakResidentMemorySizeInBytes;	// 32 = 0x20
    unsigned long long _physicalMemoryFootprintInBytes;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000f19a4
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00000000000f1ff4
@property(readonly, nonatomic) unsigned long long physicalMemoryFootprintInBytes; // @synthesize physicalMemoryFootprintInBytes=_physicalMemoryFootprintInBytes;
@property(readonly, nonatomic) unsigned long long peakResidentMemorySizeInBytes; // @synthesize peakResidentMemorySizeInBytes=_peakResidentMemorySizeInBytes;
@property(readonly, nonatomic) unsigned long long residentMemorySizeInBytes; // @synthesize residentMemorySizeInBytes=_residentMemorySizeInBytes;
@property(readonly, nonatomic) int pageSizeInBytes; // @synthesize pageSizeInBytes=_pageSizeInBytes;
@property(readonly, nonatomic) int numberOfRegions; // @synthesize numberOfRegions=_numberOfRegions;
@property(readonly, nonatomic) unsigned long long virtualMemorySizeInBytes; // @synthesize virtualMemorySizeInBytes=_virtualMemorySizeInBytes;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000f1ba4
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000f19ac
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f1999
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f1889
- (unsigned long long)hash;	// IMP=0x00000000000f1702
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x00000000000f138e
- (id)description;	// IMP=0x00000000000f137a
- (id)initWithVirtualMemorySizeInBytes:(unsigned long long)arg1 numberOfRegions:(int)arg2 pageSizeInBytes:(int)arg3 residentMemorySizeInBytes:(unsigned long long)arg4 peakResidentMemorySizeInBytes:(unsigned long long)arg5 physicalMemoryFootprintInBytes:(unsigned long long)arg6;	// IMP=0x00000000000f130c
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x00000000000f2063

@end

