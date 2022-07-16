//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUserActivity.h>

@class NSString;

@interface NSUserActivity (UISceneActivationConditions)
+ (id)writableTypeIdentifiersForItemProvider;	// IMP=0x0000000000a86f57
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000a86dd8
+ (id)readableTypeIdentifiersForItemProvider;	// IMP=0x0000000000a86d71
@property(copy, nonatomic) NSString *targetContentIdentifier;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a86fbe
- (id)initWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000a86e9f
- (void)_setSourceApplication:(id)arg1;	// IMP=0x0000000000f8cf6d
@property(readonly, nonatomic) NSString *_sourceApplication; // @dynamic _sourceApplication;
@end
