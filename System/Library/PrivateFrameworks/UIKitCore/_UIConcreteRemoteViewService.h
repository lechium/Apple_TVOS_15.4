//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSExtension, NSUUID;
@protocol PKPlugIn;

__attribute__((visibility("hidden")))
@interface _UIConcreteRemoteViewService
{
    _Bool _overridesHostAppearance;	// 8 = 0x8
    NSUUID *_contextToken;	// 16 = 0x10
    NSExtension *_extension;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000f2f209
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
- (_Bool)overridesHostAppearance;	// IMP=0x0000000000f2f1d4
- (id)contextToken;	// IMP=0x0000000000f2f1c3
- (void)endUsing:(CDUnknownBlockType)arg1;	// IMP=0x0000000000f2f151
- (void)beginUsing:(CDUnknownBlockType)arg1;	// IMP=0x0000000000f2f0df
- (id)viewControllerClassName;	// IMP=0x0000000000f2ef7a
- (int)processIdentifier;	// IMP=0x0000000000f2ef06
- (id)multipleInstanceUUID;	// IMP=0x0000000000f2eeb6
- (_Bool)multipleInstances;	// IMP=0x0000000000f2edf4
- (id)xpcServiceNameRoot;	// IMP=0x0000000000f2ed29
- (id)identifier;	// IMP=0x0000000000f2ecd9
@property(retain, nonatomic) id <PKPlugIn> plugin;
- (void)updateOverridesHostAppearance;	// IMP=0x0000000000f2ebb8
- (id)initWithExtension:(id)arg1 andContextToken:(id)arg2;	// IMP=0x0000000000f2eaf2

@end

