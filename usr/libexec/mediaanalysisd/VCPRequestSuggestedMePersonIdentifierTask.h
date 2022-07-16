//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSURL;

@interface VCPRequestSuggestedMePersonIdentifierTask : NSObject
{
    struct atomic<bool> _started;	// 8 = 0x8
    struct atomic<bool> _cancel;	// 9 = 0x9
    NSDictionary *_context;	// 16 = 0x10
    NSURL *_photoLibraryURL;	// 24 = 0x18
    CDUnknownBlockType _progressHandler;	// 32 = 0x20
    CDUnknownBlockType _reply;	// 40 = 0x28
    CDUnknownBlockType _cancelBlock;	// 48 = 0x30
}

+ (id)taskWithContext:(id)arg1 andPhotoLibraryURL:(id)arg2 andProgressHandler:(CDUnknownBlockType)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x002000000008c1e1
- (void).cxx_destruct;	// IMP=0x002000000008c72e
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
- (_Bool)autoCancellable;	// IMP=0x001000000008c70d
- (int)run;	// IMP=0x001000000008c4bf
- (_Bool)isCanceled;	// IMP=0x001000000008c4a0
- (void)cancel;	// IMP=0x001000000008c495
- (float)resourceRequirement;	// IMP=0x001000000008c487
- (void)dealloc;	// IMP=0x001000000008c2c0
- (id)initWithContext:(id)arg1 andPhotoLibraryURL:(id)arg2 andProgressHandler:(CDUnknownBlockType)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x001000000008c0fc

@end
