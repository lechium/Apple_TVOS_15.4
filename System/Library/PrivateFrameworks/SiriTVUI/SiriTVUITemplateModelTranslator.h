//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SiriTVUITemplateModelTranslator : NSObject
{
}

+ (id)viewControllerForTemplateItem:(id)arg1 delegate:(id)arg2;	// IMP=0x000000000001c1cb
- (_Bool)canTranslateSnippet:(id)arg1;	// IMP=0x000000000001c1c3
- (id)annotationTemplateItemForSnippet:(id)arg1;	// IMP=0x000000000001c1bb
- (id)templateItemsForSnippet:(id)arg1 currentUtterance:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000001c1a5
- (id)templateItemsForSnippet:(id)arg1 currentUtterance:(id)arg2;	// IMP=0x000000000001c19d
- (_Bool)shouldLoadSnippetAsynchronously:(id)arg1;	// IMP=0x000000000001c195

@end
