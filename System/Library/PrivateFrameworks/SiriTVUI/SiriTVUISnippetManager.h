//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFClientPluginManager;

@interface SiriTVUISnippetManager : NSObject
{
    AFClientPluginManager *_pluginManager;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000000001ccc7
- (void).cxx_destruct;	// IMP=0x000000000001dca5
- (id)snippetViewControllerForSnippet:(id *)arg1;	// IMP=0x000000000001d4a3
- (id)modalViewControllerForAceView:(id *)arg1;	// IMP=0x000000000001cea9
- (id)init;	// IMP=0x000000000001cd1c

@end

