//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Foundation/PKModularService-Protocol.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface UIKit_PKSubsystem : NSObject <PKModularService>
{
    _Bool _initialized;	// 8 = 0x8
    _Bool _plugInKitProcess;	// 9 = 0x9
    NSDictionary *_infoDictionary;	// 16 = 0x10
}

+ (id)initForPlugInKit;	// IMP=0x000000000022277b
+ (id)initForPlugInKitWithOptions:(id)arg1;	// IMP=0x0000000000222762
+ (id)sharedInstance;	// IMP=0x00000000002226ca
@property(nonatomic, getter=isPlugInKitProcess) _Bool plugInKitProcess; // @synthesize plugInKitProcess=_plugInKitProcess;
@property(copy, nonatomic) NSDictionary *infoDictionary; // @synthesize infoDictionary=_infoDictionary;
- (void)endUsing:(id)arg1;	// IMP=0x00000000002226c4
- (void)beginUsing:(id)arg1 withBundle:(id)arg2;	// IMP=0x00000000002224a9
- (void)dealloc;	// IMP=0x000000000022244b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

