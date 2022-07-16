//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBMediaItemValue, _INPBPrivateMediaIntentData;

@protocol _INPBPrivateAddMediaIntentData <NSObject>
+ (Class)audioSearchResultsType;
@property(readonly, nonatomic) _Bool hasPrivateMediaIntentData;
@property(retain, nonatomic) _INPBPrivateMediaIntentData *privateMediaIntentData;
@property(readonly, nonatomic) unsigned long long audioSearchResultsCount;
@property(copy, nonatomic) NSArray *audioSearchResults;
- (_INPBMediaItemValue *)audioSearchResultsAtIndex:(unsigned long long)arg1;
- (void)addAudioSearchResults:(_INPBMediaItemValue *)arg1;
- (void)clearAudioSearchResults;
@end

