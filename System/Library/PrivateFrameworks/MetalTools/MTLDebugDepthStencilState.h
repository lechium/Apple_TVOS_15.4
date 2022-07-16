//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MTLDepthStencilDescriptor;

@interface MTLDebugDepthStencilState
{
    unsigned char _attachmentWriteMask;	// 36 = 0x24
    MTLDepthStencilDescriptor *_descriptor;	// 40 = 0x28
}

@property(readonly, nonatomic) unsigned char attachmentWriteMask; // @synthesize attachmentWriteMask=_attachmentWriteMask;
@property(readonly, nonatomic) MTLDepthStencilDescriptor *descriptor; // @synthesize descriptor=_descriptor;
- (id)description;	// IMP=0x00000000000651bf
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x0000000000065136
- (void)dealloc;	// IMP=0x00000000000650f4
- (id)initWithDepthStencilState:(id)arg1 descriptor:(id)arg2 device:(id)arg3;	// IMP=0x0000000000064ea0

@end

