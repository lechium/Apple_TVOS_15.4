//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/HFServiceTreeMatching-Protocol.h>

@class NSSet, NSString;

@interface HFServiceTreeTypePredicate : NSObject <HFServiceTreeMatching>
{
    _Bool _includeChildServices;	// 8 = 0x8
    NSSet *_serviceTypes;	// 16 = 0x10
    NSSet *_serviceSubtypes;	// 24 = 0x18
}

+ (id)na_identity;	// IMP=0x00000000002a21aa
+ (id)predicateWithServiceType:(id)arg1 includeChildServices:(_Bool)arg2;	// IMP=0x00000000002a1aea
+ (id)predicateWithServiceType:(id)arg1;	// IMP=0x00000000002a1ad6
+ (id)anyServiceTypePredicateIncludingChildServices;	// IMP=0x00000000002a1a3d
+ (id)anyServiceTypePredicate;	// IMP=0x00000000002a19a7
- (void).cxx_destruct;	// IMP=0x00000000002a2417
@property(readonly, nonatomic) _Bool includeChildServices; // @synthesize includeChildServices=_includeChildServices;
@property(readonly, copy, nonatomic) NSSet *serviceSubtypes; // @synthesize serviceSubtypes=_serviceSubtypes;
@property(readonly, copy, nonatomic) NSSet *serviceTypes; // @synthesize serviceTypes=_serviceTypes;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002a2329
@property(readonly, copy) NSString *description;
- (id)matchingServicesForRootService:(id)arg1;	// IMP=0x00000000002a1dc7
- (_Bool)_matchesService:(id)arg1;	// IMP=0x00000000002a1c45
- (id)initWithServiceTypes:(id)arg1 serviceSubtypes:(id)arg2 includeChildServices:(_Bool)arg3;	// IMP=0x00000000002a1ba1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
