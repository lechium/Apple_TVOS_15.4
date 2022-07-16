//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariCore/NSSecureCoding-Protocol.h>

@class NSArray, WBSMemoryFootprintMallocZone;

@interface WBSMemoryFootprint : NSObject <NSSecureCoding>
{
    struct task_vm_info _vmInfo;	// 8 = 0x8
    NSArray *_zones;	// 368 = 0x170
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000227a3
+ (id)new;	// IMP=0x00000000000224cd
- (void).cxx_destruct;	// IMP=0x0000000000022c6a
@property(readonly, nonatomic) NSArray *zones; // @synthesize zones=_zones;
- (id)dictionaryRepresentation;	// IMP=0x0000000000022a05
@property(readonly, nonatomic) WBSMemoryFootprintMallocZone *defaultMallocZone;
@property(readonly, nonatomic) unsigned long long dirtySize;
@property(readonly, nonatomic) unsigned long long residentSize;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000227ab
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000022627
- (id)initWithError:(id *)arg1;	// IMP=0x00000000000224e3
- (id)init;	// IMP=0x00000000000224d5

@end
