//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesStore/NSCopying-Protocol.h>

@class NSArray, NSMutableDictionary, NSNumber;

@interface ISPersonalizeOffersRequest : NSObject <NSCopying>
{
    NSNumber *_accountIdentifier;	// 8 = 0x8
    NSMutableDictionary *_itemIDsByType;	// 16 = 0x10
}

@property(retain, nonatomic) NSNumber *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005fce3
- (id)itemIdentifiersForItemType:(id)arg1;	// IMP=0x000000000005fcb4
@property(readonly, nonatomic) NSArray *allItemTypes;
- (void)addItemIdentifier:(id)arg1 forItemType:(id)arg2;	// IMP=0x000000000005fc01
- (void)dealloc;	// IMP=0x000000000005fbb7
- (id)initWithItems:(id)arg1;	// IMP=0x000000000005f9e0

@end

