//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSArray;

@interface CKRepairZonePCSOperationInfo <NSSecureCoding>
{
    NSArray *_zoneIDs;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000383f0
- (void).cxx_destruct;	// IMP=0x000000000003854f
@property(retain, nonatomic) NSArray *zoneIDs; // @synthesize zoneIDs=_zoneIDs;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003847b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000383f8

@end
