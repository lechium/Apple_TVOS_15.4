//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol CUTFileCopierDelegate;

@interface CUTFileCopier : NSObject
{
    _Bool _shouldCancel;	// 8 = 0x8
    _Bool _didErrorOccur;	// 9 = 0x9
    _Bool _inProgress;	// 10 = 0xa
    unsigned int _operation;	// 12 = 0xc
    id <CUTFileCopierDelegate> _delegate;	// 16 = 0x10
    NSURL *_inputURL;	// 24 = 0x18
    NSURL *_outputURL;	// 32 = 0x20
    id _identifier;	// 40 = 0x28
    void *_BOMCopier;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000000fe30
@property void *_BOMCopier; // @synthesize _BOMCopier;
@property unsigned int operation; // @synthesize operation=_operation;
@property _Bool inProgress; // @synthesize inProgress=_inProgress;
@property(readonly, nonatomic) _Bool didErrorOccur; // @synthesize didErrorOccur=_didErrorOccur;
@property(readonly, nonatomic) _Bool wasCancelled; // @synthesize wasCancelled=_shouldCancel;
@property(readonly) id identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSURL *outputURL; // @synthesize outputURL=_outputURL;
@property(readonly, copy) NSURL *inputURL; // @synthesize inputURL=_inputURL;
@property __weak id <CUTFileCopierDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_worker_doCopy;	// IMP=0x000000000000f7b7
- (void)_main_copierFinishedWithResult:(id)arg1;	// IMP=0x000000000000f72a
- (void)cleanup;	// IMP=0x000000000000f65d
- (void)cancel;	// IMP=0x000000000000f635
- (void)start;	// IMP=0x000000000000f5b4
- (void)_fillOutputURLFromInputURL;	// IMP=0x000000000000f39a
- (id)_temporaryCopierPath;	// IMP=0x000000000000f34c
- (void)dealloc;	// IMP=0x000000000000f2fe
- (id)initWithInputURL:(id)arg1 outputURL:(id)arg2 identifier:(id)arg3 operation:(unsigned int)arg4 delegate:(id)arg5;	// IMP=0x000000000000f1c7

@end

