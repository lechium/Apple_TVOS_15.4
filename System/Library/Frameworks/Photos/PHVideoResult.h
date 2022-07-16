//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL;

@interface PHVideoResult
{
    NSURL *_videoURL;	// 24 = 0x18
    NSString *_uniformTypeIdentifier;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000f36d
@property(copy, nonatomic) NSString *uniformTypeIdentifier; // @synthesize uniformTypeIdentifier=_uniformTypeIdentifier;
@property(retain, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
- (id)videoAdjustmentData;	// IMP=0x000000000000f2cf
- (void)setVideoAdjustmentData:(id)arg1;	// IMP=0x000000000000f2b6
- (id)allowedInfoKeys;	// IMP=0x000000000000f253
- (_Bool)containsValidData;	// IMP=0x000000000000f23e

@end

