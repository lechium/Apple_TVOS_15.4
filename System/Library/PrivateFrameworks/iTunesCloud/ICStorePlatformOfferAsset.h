//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSURL;

@interface ICStorePlatformOfferAsset : NSObject
{
    NSDictionary *_responseDictionary;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000006584a
@property(readonly, nonatomic) long long size;
@property(readonly, copy, nonatomic) NSURL *previewURL;
@property(readonly, nonatomic) double previewDuration;
@property(readonly, nonatomic) double duration;
- (id)initWithResponseDictionary:(id)arg1;	// IMP=0x0000000000065593

@end

