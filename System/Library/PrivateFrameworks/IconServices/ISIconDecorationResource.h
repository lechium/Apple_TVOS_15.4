//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IconServices/ISScalableCompositorResource-Protocol.h>

@class ISIconDecoration, NSString;
@protocol ISScalableCompositorResource;

__attribute__((visibility("hidden")))
@interface ISIconDecorationResource : NSObject <ISScalableCompositorResource>
{
    ISIconDecoration *_decoration;	// 8 = 0x8
    id <ISScalableCompositorResource> _internalResource;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000213c7
@property(readonly) id <ISScalableCompositorResource> internalResource; // @synthesize internalResource=_internalResource;
@property(readonly) ISIconDecoration *decoration; // @synthesize decoration=_decoration;
- (id)imageForSize:(struct CGSize)arg1 scale:(double)arg2;	// IMP=0x0000000000021370
- (void)configureWithType:(id)arg1;	// IMP=0x0000000000020fe3
- (id)initWithDecoration:(id)arg1;	// IMP=0x0000000000020eb0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
