//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>
#import <MediaPlayer/NSMutableCopying-Protocol.h>

@class MPStoreHLSAssetInfo, NSArray, NSDate, NSDictionary;

@interface MPStoreAssetPlaybackResponse : NSObject <NSCopying, NSMutableCopying>
{
    NSDictionary *_dialogDictionary;	// 8 = 0x8
    NSDate *_expirationDate;	// 16 = 0x10
    NSArray *_fileAssetInfoList;	// 24 = 0x18
    MPStoreHLSAssetInfo *_hlsAssetInfo;	// 32 = 0x20
    _Bool _liveRadioStream;	// 40 = 0x28
    NSArray *_radioStreamAssetInfoList;	// 48 = 0x30
    id _suzeLeaseID;	// 56 = 0x38
    _Bool _subscriptionRequired;	// 64 = 0x40
    _Bool _onlineSubscriptionKeysRequired;	// 65 = 0x41
}

- (void).cxx_destruct;	// IMP=0x0000000000184ad7
@property(readonly, nonatomic) _Bool onlineSubscriptionKeysRequired; // @synthesize onlineSubscriptionKeysRequired=_onlineSubscriptionKeysRequired;
@property(readonly, nonatomic, getter=isSubscriptionRequired) _Bool subscriptionRequired; // @synthesize subscriptionRequired=_subscriptionRequired;
@property(readonly, nonatomic) id suzeLeaseID; // @synthesize suzeLeaseID=_suzeLeaseID;
@property(readonly, copy, nonatomic) NSArray *radioStreamAssetInfoList; // @synthesize radioStreamAssetInfoList=_radioStreamAssetInfoList;
@property(readonly, nonatomic, getter=isLiveRadioStream) _Bool liveRadioStream; // @synthesize liveRadioStream=_liveRadioStream;
@property(readonly, nonatomic) MPStoreHLSAssetInfo *hlsAssetInfo; // @synthesize hlsAssetInfo=_hlsAssetInfo;
@property(readonly, copy, nonatomic) NSArray *fileAssetInfoList; // @synthesize fileAssetInfoList=_fileAssetInfoList;
@property(readonly, copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, copy, nonatomic) NSDictionary *dialogDictionary; // @synthesize dialogDictionary=_dialogDictionary;
- (id)_copyWithPlaybackResponseClass:(Class)arg1;	// IMP=0x00000000001849be
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000184990
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000184985

@end

