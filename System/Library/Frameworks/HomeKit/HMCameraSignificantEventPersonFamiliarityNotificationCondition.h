//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFObject-Protocol.h>
#import <HomeKit/NSCopying-Protocol.h>

@class NSArray, NSPredicate, NSString;

@interface HMCameraSignificantEventPersonFamiliarityNotificationCondition : NSObject <HMFObject, NSCopying>
{
    unsigned long long _personFamiliarityOptions;	// 8 = 0x8
}

+ (id)shortDescription;	// IMP=0x000000000020e9cb
@property(readonly) unsigned long long personFamiliarityOptions; // @synthesize personFamiliarityOptions=_personFamiliarityOptions;
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000020e89c
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000020e7ef
@property(readonly, copy) NSPredicate *predicate;
- (id)initWithPersonFamiliarityOptions:(unsigned long long)arg1;	// IMP=0x000000000020e77d
- (id)initWithPredicate:(id)arg1;	// IMP=0x000000000020e682

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end

