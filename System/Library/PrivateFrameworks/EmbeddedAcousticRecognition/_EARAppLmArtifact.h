//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface _EARAppLmArtifact
{
    shared_ptr_f52c68bb _cachedLmData;	// 24 = 0x18
    NSString *_cachedConfigFilepath;	// 40 = 0x28
    NSString *_cachedNcsRoot;	// 48 = 0x30
    NSString *_cachedDataRoot;	// 56 = 0x38
}

+ (id)loadLmHandleFromArtifactAt:(id)arg1 configPath:(id)arg2 ncsRoot:(id)arg3;	// IMP=0x0000000000536dd4
+ (_Bool)transitionArtifactAt:(id)arg1 toStage:(unsigned long long)arg2 configPath:(id)arg3 ncsRoot:(id)arg4 dataRoot:(id)arg5 estimationRoot:(id)arg6 minimize:(_Bool)arg7 saveTo:(id)arg8;	// IMP=0x00000000005366e5
+ (_Bool)createPhraseCountsArtifact:(id)arg1 version:(id)arg2 locale:(id)arg3 rawPhraseCountsPath:(id)arg4 customPronunciationsPath:(id)arg5 saveTo:(id)arg6;	// IMP=0x00000000005360f4
+ (_Bool)createEmptyArtifact:(id)arg1 version:(id)arg2 locale:(id)arg3 saveTo:(id)arg4;	// IMP=0x0000000000535ce1
- (id).cxx_construct;	// IMP=0x0000000000537245
- (void).cxx_destruct;	// IMP=0x00000000005371f4
- (unsigned long long)getLifeCycleStage;	// IMP=0x0000000000535a7e
- (_Bool)isAdaptableToSpeechModelVersion:(id)arg1 locale:(id)arg2;	// IMP=0x00000000005356e0
- (id)loadLmHandle;	// IMP=0x00000000005351d4
- (id)loadOovs;	// IMP=0x0000000000534e1e
- (id)loadCustomPronData:(id)arg1 ncsRoot:(id)arg2 dataRoot:(id)arg3;	// IMP=0x0000000000534960
- (id)loadAppLmData:(id)arg1 ncsRoot:(id)arg2 dataRoot:(id)arg3;	// IMP=0x000000000053481e
- (shared_ptr_f52c68bb)_loadRawAppLmData:(id)arg1 ncsRoot:(id)arg2 dataRoot:(id)arg3;	// IMP=0x000000000053403c
- (void)_cacheLmData:(shared_ptr_f52c68bb)arg1 configFilepath:(id)arg2 ncsRoot:(id)arg3 dataRoot:(id)arg4;	// IMP=0x0000000000533f2c
- (shared_ptr_f52c68bb)_tryToLoadCachedLmData:(id)arg1 ncsRoot:(id)arg2 dataRoot:(id)arg3;	// IMP=0x0000000000533dda
- (id)initWithAppLmArtifact:(shared_ptr_12953206)arg1;	// IMP=0x0000000000533d40
- (id)initWithPath:(id)arg1;	// IMP=0x0000000000533bee
- (id)initWithVersion:(id)arg1 andLocale:(id)arg2;	// IMP=0x0000000000533931

@end

