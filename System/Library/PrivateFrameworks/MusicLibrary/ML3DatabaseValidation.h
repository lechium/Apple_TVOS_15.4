//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ML3MusicLibrary;
@protocol ML3DatabaseValidationDelegate;

@interface ML3DatabaseValidation : NSObject
{
    _Bool _truncateBeforeValidating;	// 8 = 0x8
    ML3MusicLibrary *_library;	// 16 = 0x10
    id <ML3DatabaseValidationDelegate> _delegate;	// 24 = 0x18
    CDUnknownBlockType _completionHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000ba435
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) __weak id <ML3DatabaseValidationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) ML3MusicLibrary *library; // @synthesize library=_library;
@property(nonatomic) _Bool truncateBeforeValidating; // @synthesize truncateBeforeValidating=_truncateBeforeValidating;
- (void)_logDatabasePathDirectoryAttributes;	// IMP=0x00000000000ba080
- (_Bool)_internalUserAgreesToRebuildUnmigratableDatabase;	// IMP=0x00000000000b9ecd
- (_Bool)_performDatabasePreprocessingWithLibrary:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000b9d21
- (_Bool)_performSchemaUpgradeWithLibrary:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000b9c3a
- (_Bool)_validateLibraryDatabaseIfNecessary:(id)arg1 withError:(id *)arg2;	// IMP=0x00000000000b98c2
- (_Bool)_truncateDatabaseFileForLibrary:(id)arg1 withError:(id *)arg2;	// IMP=0x00000000000b9581
- (void)runValidation;	// IMP=0x00000000000b8f4b
- (id)initWithLibrary:(id)arg1 delegate:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000b8e79

@end

