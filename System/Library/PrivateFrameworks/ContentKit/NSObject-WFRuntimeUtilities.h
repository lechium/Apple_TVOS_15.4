//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContentKit/WFNaming-Protocol.h>
#import <ContentKit/WFTyping-Protocol.h>

@class NSString, WFType;

@interface NSObject (WFRuntimeUtilities) <WFTyping, WFNaming>
+ (void)wf_enumerateClassMethodsWithPrefix:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000004b483
@property(readonly, nonatomic) WFType *wfType;
@property(readonly, copy, nonatomic) NSString *wfName;
@end

