//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBSelectionItem;

@protocol _INPBPayloadNeedsDisambiguation <NSObject>
+ (Class)disambiguationItemsType;
@property(readonly, nonatomic) unsigned long long disambiguationItemsCount;
@property(copy, nonatomic) NSArray *disambiguationItems;
- (_INPBSelectionItem *)disambiguationItemsAtIndex:(unsigned long long)arg1;
- (void)addDisambiguationItems:(_INPBSelectionItem *)arg1;
- (void)clearDisambiguationItems;
@end

