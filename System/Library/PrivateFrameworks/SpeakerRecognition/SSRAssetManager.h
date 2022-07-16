//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol OS_dispatch_queue, SSRAssetManagerDelegate;

@interface SSRAssetManager : NSObject
{
    id <SSRAssetManagerDelegate> _delegate;	// 8 = 0x8
    NSArray *_assetProviders;	// 16 = 0x10
    NSString *_currentLanguageCode;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

+ (id)sharedManager;	// IMP=0x000000000003cf79
- (void).cxx_destruct;	// IMP=0x000000000003dac1
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSString *currentLanguageCode; // @synthesize currentLanguageCode=_currentLanguageCode;
@property(retain, nonatomic) NSArray *assetProviders; // @synthesize assetProviders=_assetProviders;
@property(nonatomic) __weak id <SSRAssetManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_latestVersionedAssetOfType:(unsigned long long)arg1 fromProviders:(id)arg2 forLocale:(id)arg3;	// IMP=0x000000000003d74f
- (float)_convertVersionStringToFloat:(id)arg1;	// IMP=0x000000000003d6b4
- (id)allInstalledAssetsOfType:(unsigned long long)arg1 forLanguage:(id)arg2;	// IMP=0x000000000003d2c7
- (id)installedAssetOfType:(unsigned long long)arg1 forLanguage:(id)arg2;	// IMP=0x000000000003d159
- (id)init;	// IMP=0x000000000003cfd3

@end

