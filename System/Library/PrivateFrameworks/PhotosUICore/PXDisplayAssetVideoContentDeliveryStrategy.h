//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@class NSString;

@interface PXDisplayAssetVideoContentDeliveryStrategy : NSObject <NSCopying>
{
    _Bool _isStreamingAllowed;	// 8 = 0x8
    _Bool _isNetworkAccessAllowed;	// 9 = 0x9
    _Bool _isAudioAllowed;	// 10 = 0xa
    long long _quality;	// 16 = 0x10
    CDStruct_e83c9415 _segmentTimeRange;	// 24 = 0x18
}

+ (id)defaultStreamingMediumQualityStrategy;	// IMP=0x0000000000007a54
@property(nonatomic) _Bool isAudioAllowed; // @synthesize isAudioAllowed=_isAudioAllowed;
@property(nonatomic) _Bool isNetworkAccessAllowed; // @synthesize isNetworkAccessAllowed=_isNetworkAccessAllowed;
@property(nonatomic) _Bool isStreamingAllowed; // @synthesize isStreamingAllowed=_isStreamingAllowed;
@property(nonatomic) CDStruct_e83c9415 segmentTimeRange; // @synthesize segmentTimeRange=_segmentTimeRange;
@property(nonatomic) long long quality; // @synthesize quality=_quality;
- (id)description;	// IMP=0x0000000000007775
@property(readonly, nonatomic) NSString *identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000007601
- (id)init;	// IMP=0x00000000000075a7

@end

