//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CIRenderTask : NSObject
{
    void *_priv;	// 8 = 0x8
}

+ (id)rendertaskWithInternalTask:(void *)arg1;	// IMP=0x0000000000148953
- (id)waitUntilCompletedAndReturnError:(id *)arg1;	// IMP=0x00000000001489d3
- (void)dealloc;	// IMP=0x000000000014898c
- (void *)internalRepresentation;	// IMP=0x0000000000148982
- (id)initWithInternalTask:(void *)arg1;	// IMP=0x0000000000148900
- (id)init;	// IMP=0x00000000001488c3
- (id)_pdfDataRepresentation;	// IMP=0x0000000000149c7a

@end

