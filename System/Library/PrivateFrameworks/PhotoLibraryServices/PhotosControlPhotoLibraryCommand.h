//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSManagedObjectContext, NSObject, NSString, NSURL, PHPhotoLibrary, PLPhotosCTL;
@protocol OS_dispatch_group;

@interface PhotosControlPhotoLibraryCommand
{
    NSManagedObjectContext *_moc;	// 8 = 0x8
    PHPhotoLibrary *_photoLibrary;	// 16 = 0x10
    NSURL *_libraryURL;	// 24 = 0x18
    NSString *_libraryArg;	// 32 = 0x20
    NSObject<OS_dispatch_group> *_group;	// 40 = 0x28
    PLPhotosCTL *_ctl;	// 48 = 0x30
    struct _NSRange _argumentRangeForRunOnManagedObjects;	// 56 = 0x38
}

+ (const char *)libraryOptstring;	// IMP=0x000000000037e31f
+ (struct option *)libraryLongopts;	// IMP=0x000000000037e317
+ (id)libraryUsagesummary;	// IMP=0x000000000037e30f
+ (id)libraryUsage;	// IMP=0x000000000037e307
+ (struct option *)longopts;	// IMP=0x000000000037e2b8
+ (const char *)optstring;	// IMP=0x000000000037e256
+ (id)usage;	// IMP=0x000000000037e1b3
+ (id)usagesummary;	// IMP=0x000000000037e13f
- (void).cxx_destruct;	// IMP=0x000000000037d02a
@property(readonly) NSString *libraryArg; // @synthesize libraryArg=_libraryArg;
@property(readonly) NSURL *libraryURL; // @synthesize libraryURL=_libraryURL;
- (int)runOnPhotoKitAssetArgumentsAllowAll:(_Bool)arg1 propertySets:(id)arg2 additionalPredicate:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x000000000037cf95
- (id)managedObjectContext;	// IMP=0x000000000037cf51
- (id)photoLibrary;	// IMP=0x000000000037cf0d
- (id)plPhotoLibrary;	// IMP=0x000000000037cec9
- (_Bool)libraryProcessOption:(BOOL)arg1 arg:(id)arg2;	// IMP=0x000000000037cec1
- (_Bool)processOption:(int)arg1 arg:(id)arg2;	// IMP=0x000000000037ce21
- (id)libraryURLFromArgument:(id)arg1;	// IMP=0x000000000037cc4a
- (id)processBooleanOptionArg:(id)arg1;	// IMP=0x000000000037ca4c
- (int)save;	// IMP=0x000000000037c987
- (id)jsonDictionaryFromError:(id)arg1;	// IMP=0x000000000037c87b
- (id)jsonDictionaryFromManagedObject:(id)arg1 maxDepth:(unsigned long long)arg2;	// IMP=0x000000000037c85e
- (id)_jsonDictionaryFromManagedObject:(id)arg1 allPreviousObjects:(id)arg2 currentDepth:(unsigned long long)arg3 maxDepth:(unsigned long long)arg4;	// IMP=0x000000000037c673
- (int)runOnAssetArgumentsAllowAll:(_Bool)arg1 additionalPredicate:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x000000000037c57e
- (int)runOnManagedObjectArgumentsWithEntityName:(id)arg1 identifierPropertyKey:(id)arg2 allowAll:(_Bool)arg3 additionalPredicate:(id)arg4 sortDescriptors:(id)arg5 relationshipKeyPathsForPrefetching:(id)arg6 block:(CDUnknownBlockType)arg7;	// IMP=0x000000000037c22d
- (int)runOnManagedObjectArgumentsWithEntityName:(id)arg1 identifierPropertyKey:(id)arg2 allowAll:(_Bool)arg3 additionalPredicate:(id)arg4 sortDescriptors:(id)arg5 block:(CDUnknownBlockType)arg6;	// IMP=0x000000000037c20a
- (int)runOnManagedObjectArgumentsWithEntityName:(id)arg1 identifierPropertyKey:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x000000000037c1e7
- (void)setArgumentRangeForRunOnManagedObjects:(struct _NSRange)arg1;	// IMP=0x000000000037c1d1
- (_Bool)argument:(id)arg1 isValidDouble:(double *)arg2;	// IMP=0x000000000037c14a
- (id)photosCtl;	// IMP=0x000000000037c135
- (void)configureWithAlternateURLToLibraryDatabase:(id)arg1;	// IMP=0x000000000037be28
- (void)waitForGroup;	// IMP=0x000000000037be0c
- (void)leaveGroup;	// IMP=0x000000000037bdf7
- (void)enterGroup;	// IMP=0x000000000037bde2
- (id)initWithArgc:(int)arg1 argv:(char **)arg2 options:(unsigned char)arg3 ctl:(id)arg4;	// IMP=0x000000000037bd32

@end
