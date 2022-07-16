//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL, TDDistiller, TDLogger;

@interface TDDistillRunner : NSObject
{
    _Bool _packDocument;	// 8 = 0x8
    TDDistiller *_distiller;	// 16 = 0x10
    NSURL *_carScratchURL;	// 24 = 0x18
    NSURL *_outputURL;	// 32 = 0x20
    TDLogger *_logger;	// 40 = 0x28
    NSString *_assetStoreVersionString;	// 48 = 0x30
    long long _assetStoreVersionNumber;	// 56 = 0x38
    NSString *_minDeploymentTarget;	// 64 = 0x40
}

@property(nonatomic) NSString *minDeploymentTarget; // @synthesize minDeploymentTarget=_minDeploymentTarget;
@property long long assetStoreVersionNumber; // @synthesize assetStoreVersionNumber=_assetStoreVersionNumber;
@property(copy) NSString *assetStoreVersionString; // @synthesize assetStoreVersionString=_assetStoreVersionString;
@property(retain, nonatomic) TDLogger *logger; // @synthesize logger=_logger;
@property(copy, nonatomic) NSURL *outputURL; // @synthesize outputURL=_outputURL;
- (void)dealloc;	// IMP=0x000000000006958b
- (_Bool)runDistillWithDocumentURL:(id)arg1 outputURL:(id)arg2 attemptIncremental:(_Bool)arg3 forceDistill:(_Bool)arg4;	// IMP=0x0000000000068afc
@property(nonatomic) _Bool packImagesInDocument;
- (_Bool)_isDistillUnnecessaryForDocument:(id)arg1;	// IMP=0x00000000000689e7
- (void)_moveScratchToOutputPath;	// IMP=0x000000000006887d
- (void)_removeScratchPath;	// IMP=0x0000000000068811
- (id)carScratchURL;	// IMP=0x00000000000686a4
- (id)init;	// IMP=0x0000000000068668

@end

