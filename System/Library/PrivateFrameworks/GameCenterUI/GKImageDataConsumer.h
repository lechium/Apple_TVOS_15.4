//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameCenterUI/GKResourceDataConsumer-Protocol.h>

@class NSString;

@interface GKImageDataConsumer : NSObject <GKResourceDataConsumer>
{
    _Bool _isLayeredImage;	// 8 = 0x8
    double _scale;	// 16 = 0x10
    struct CGSize _size;	// 24 = 0x18
}

@property(readonly, nonatomic) _Bool isLayeredImage; // @synthesize isLayeredImage=_isLayeredImage;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
- (id)objectForData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005dada
- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2 isLayeredImage:(_Bool)arg3;	// IMP=0x000000000005da72

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

