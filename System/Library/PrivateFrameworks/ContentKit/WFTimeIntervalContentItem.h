//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContentKit/WFContentItemClass-Protocol.h>

@class WFTimeInterval;

@interface WFTimeIntervalContentItem <WFContentItemClass>
{
}

+ (id)countDescription;	// IMP=0x000000000003b2a2
+ (id)pluralTypeDescription;	// IMP=0x000000000003b291
+ (id)typeDescription;	// IMP=0x000000000003b280
+ (id)contentCategories;	// IMP=0x000000000003b219
+ (id)outputTypes;	// IMP=0x000000000003b11e
+ (id)ownedTypes;	// IMP=0x000000000003b0a2
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000003b2e1
@property(readonly, nonatomic) WFTimeInterval *timeInterval;

@end

