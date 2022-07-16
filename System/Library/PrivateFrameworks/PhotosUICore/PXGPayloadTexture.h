//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol NSCopying;

@interface PXGPayloadTexture
{
    int _presentationType;	// 8 = 0x8
    id <NSCopying> _payload;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002137e7
@property(readonly, copy, nonatomic) id <NSCopying> payload; // @synthesize payload=_payload;
- (_Bool)isOpaque;	// IMP=0x00000000002137ce
@property(readonly, nonatomic) int presentationType;
- (struct CGSize)pixelSize;	// IMP=0x00000000002137a8
- (struct CGImage *)imageRepresentation;	// IMP=0x00000000002137a0
- (long long)estimatedByteSize;	// IMP=0x0000000000213798
- (id)init;	// IMP=0x000000000021371e
- (id)initWithPayload:(id)arg1 presentationType:(int)arg2;	// IMP=0x0000000000213690

@end
