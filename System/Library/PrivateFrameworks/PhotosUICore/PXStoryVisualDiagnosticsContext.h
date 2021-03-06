//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL, PXStoryVisualDiagnosticsConfiguration;

@interface PXStoryVisualDiagnosticsContext : NSObject
{
    struct CGContext *_CGContext;	// 8 = 0x8
    PXStoryVisualDiagnosticsConfiguration *_configuration;	// 16 = 0x10
    NSURL *_fileURL;	// 24 = 0x18
    struct CGRect _currentPageBounds;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000896826
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly, nonatomic) PXStoryVisualDiagnosticsConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) struct CGRect currentPageBounds; // @synthesize currentPageBounds=_currentPageBounds;
@property(readonly, nonatomic) struct CGContext *CGContext; // @synthesize CGContext=_CGContext;
@property(readonly, nonatomic) _Bool isPrivateDataAllowed;
- (void)addPagesForTableWithConfiguration:(CDUnknownBlockType)arg1 columnsConfiguration:(CDUnknownBlockType)arg2 rowsConfiguration:(CDUnknownBlockType)arg3;	// IMP=0x00000000008966c6
- (void)addTitlePageWithTitle:(id)arg1 subtitle:(id)arg2;	// IMP=0x0000000000896309
- (void)drawImageInRect:(struct CGRect)arg1 configuration:(CDUnknownBlockType)arg2;	// IMP=0x0000000000896156
- (void)drawTextInRect:(struct CGRect)arg1 configuration:(CDUnknownBlockType)arg2;	// IMP=0x0000000000895d7c
- (void)fillRect:(struct CGRect)arg1 configuration:(CDUnknownBlockType)arg2;	// IMP=0x0000000000895cb0
- (void)strokeRect:(struct CGRect)arg1 configuration:(CDUnknownBlockType)arg2;	// IMP=0x0000000000895bcf
- (void)endPage;	// IMP=0x0000000000895afb
- (void)beginPageWithConfiguration:(CDUnknownBlockType)arg1;	// IMP=0x00000000008958e1
- (void)beginPage;	// IMP=0x00000000008958c8
- (void)dealloc;	// IMP=0x000000000089588e
- (id)initWithConfiguration:(id)arg1 dataConsumer:(struct CGDataConsumer *)arg2;	// IMP=0x00000000008955d5
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00000000008955c1
- (id)init;	// IMP=0x0000000000895547

@end

