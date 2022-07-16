//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FamilyCircle/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface FAFamilyCloudKitProperties : NSObject <NSSecureCoding>
{
    NSDictionary *_dictionary;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000098d3
- (void).cxx_destruct;	// IMP=0x0000000000009a16
@property(readonly, copy, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000098fe
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000098db
@property(readonly, copy, nonatomic) NSString *participantID;
@property(readonly, copy, nonatomic) NSString *zoneID;
@property(readonly, copy, nonatomic) NSString *shareID;
@property(readonly, copy, nonatomic) NSString *bundleID;
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x00000000000097ec

@end
