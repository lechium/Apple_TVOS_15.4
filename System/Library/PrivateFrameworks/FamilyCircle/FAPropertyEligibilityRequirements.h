//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FamilyCircle/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface FAPropertyEligibilityRequirements : NSObject <NSSecureCoding>
{
    _Bool _hasRecommendedMembers;	// 8 = 0x8
    _Bool _serverEligibility;	// 9 = 0x9
    NSString *_propertyName;	// 16 = 0x10
    NSString *_expectedMediaAltDSID;	// 24 = 0x18
    NSArray *_activeBundleIDs;	// 32 = 0x20
    id _serverPayload;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001132a
- (void).cxx_destruct;	// IMP=0x000000000001136c
@property(readonly, nonatomic) id serverPayload; // @synthesize serverPayload=_serverPayload;
@property(readonly, copy, nonatomic) NSArray *activeBundleIDs; // @synthesize activeBundleIDs=_activeBundleIDs;
@property(readonly, nonatomic) _Bool serverEligibility; // @synthesize serverEligibility=_serverEligibility;
@property(readonly, copy, nonatomic) NSString *expectedMediaAltDSID; // @synthesize expectedMediaAltDSID=_expectedMediaAltDSID;
@property(readonly, nonatomic) _Bool hasRecommendedMembers; // @synthesize hasRecommendedMembers=_hasRecommendedMembers;
@property(readonly, copy, nonatomic) NSString *propertyName; // @synthesize propertyName=_propertyName;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000011100
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001103a
- (id)initWithPropertyName:(id)arg1 hasRecommendedMembers:(_Bool)arg2 expectedMediaAltDSID:(id)arg3 serverEligibility:(_Bool)arg4 activeBundleIDs:(id)arg5 serverPayload:(id)arg6;	// IMP=0x0000000000010f1a
- (id)initWithPropertyName:(id)arg1 dictionaryRepresentation:(id)arg2;	// IMP=0x0000000000010db7

@end

