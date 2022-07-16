//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _EARLmModel : NSObject
{
    shared_ptr_ae20c496 _model;	// 8 = 0x8
    shared_ptr_6d392393 _buildConfig;	// 24 = 0x18
}

+ (void)removeWithDirectory:(id)arg1;	// IMP=0x00000000004a0666
+ (void)initialize;	// IMP=0x000000000049f829
- (id).cxx_construct;	// IMP=0x00000000004a0db5
- (void).cxx_destruct;	// IMP=0x00000000004a0d91
@property(readonly, nonatomic) shared_ptr_6d392393 buildConfig; // @synthesize buildConfig=_buildConfig;
@property(readonly, nonatomic) shared_ptr_ae20c496 model; // @synthesize model=_model;
- (id)deserializeModelData:(id)arg1;	// IMP=0x00000000004a0c8e
- (id)serializedModelWithLanguage:(id)arg1 modelData:(id)arg2 oovs:(id)arg3;	// IMP=0x00000000004a094b
- (double)age;	// IMP=0x00000000004a0933
- (float)weight;	// IMP=0x00000000004a091b
- (id)metrics;	// IMP=0x00000000004a07e6
- (_Bool)writeToDirectory:(id)arg1;	// IMP=0x00000000004a04cd
- (void)setWeight:(float)arg1;	// IMP=0x00000000004a0454
- (_Bool)trainWithData:(id)arg1 shouldStop:(CDUnknownBlockType)arg2;	// IMP=0x00000000004a0441
- (_Bool)trainWithData:(id)arg1;	// IMP=0x00000000004a01c7
- (id)handle;	// IMP=0x00000000004a0018
- (id)initFromDirectory:(id)arg1;	// IMP=0x000000000049fc5e
- (id)initWithConfiguration:(id)arg1;	// IMP=0x000000000049fc44
- (id)initWithConfiguration:(id)arg1 root:(id)arg2;	// IMP=0x000000000049f8d9
- (id)_initWithModel:(shared_ptr_ae20c496)arg1;	// IMP=0x000000000049f851

@end

