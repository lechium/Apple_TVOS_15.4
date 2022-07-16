//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppStoreComponents/ASCOffer-Protocol.h>
#import <AppStoreComponents/NSCopying-Protocol.h>

@class ASCAdamID, ASCOfferMetadata, NSArray, NSDictionary, NSNumber, NSString;

@interface ASCLocalOffer : NSObject <ASCOffer, NSCopying>
{
    ASCOfferMetadata *_metadata;	// 8 = 0x8
    CDUnknownBlockType _action;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001a218
@property(readonly, copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(readonly, nonatomic) ASCOfferMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000019f53
@property(readonly) unsigned long long hash;
- (id)offerWithMetrics:(id)arg1;	// IMP=0x0000000000019e87
@property(readonly, nonatomic) NSArray *metrics;
@property(readonly, nonatomic) NSNumber *ageRating;
@property(readonly, nonatomic) long long flags;
- (id)formattedPrice;	// IMP=0x0000000000019e62
- (id)price;	// IMP=0x0000000000019e5a
@property(readonly, copy, nonatomic) NSDictionary *subtitles;
@property(readonly, copy, nonatomic) NSDictionary *titles;
@property(readonly, copy, nonatomic) ASCAdamID *id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000019e1c
- (id)initWithMetadata:(id)arg1 action:(CDUnknownBlockType)arg2;	// IMP=0x0000000000019d63

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
