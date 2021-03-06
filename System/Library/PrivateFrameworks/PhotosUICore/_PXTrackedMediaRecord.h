//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _PXTrackedMediaRecord : NSObject
{
    id _media;	// 8 = 0x8
    long long _mediaKind;	// 16 = 0x10
    double _timestamp;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000004e29b8
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) long long mediaKind; // @synthesize mediaKind=_mediaKind;
@property(readonly, nonatomic) id media; // @synthesize media=_media;
- (id)init;	// IMP=0x00000000004e291f
- (id)initWithMedia:(id)arg1 mediaKind:(long long)arg2 timestamp:(double)arg3;	// IMP=0x00000000004e28a9

@end

