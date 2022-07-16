//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContentKit/WFContentPropertyContainer-Protocol.h>

@class NSSet;

@interface WFContentPredicate : NSObject <WFContentPropertyContainer>
{
    CDUnknownBlockType _block;	// 8 = 0x8
}

+ (id)predicateWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000007c883
+ (id)falsePredicate;	// IMP=0x000000000007c86a
+ (id)truePredicate;	// IMP=0x000000000007c851
- (void).cxx_destruct;	// IMP=0x000000000007ca14
@property(readonly, nonatomic) NSSet *containedProperties;
- (void)evaluateWithObject:(id)arg1 propertySubstitutor:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000007c975
- (void)evaluateWithObject:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000007c95e
- (id)initWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000007c8dc

@end

