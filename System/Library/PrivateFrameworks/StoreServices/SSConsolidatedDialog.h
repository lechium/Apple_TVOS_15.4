//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreServices/NSCopying-Protocol.h>
#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSString;

@interface SSConsolidatedDialog : NSObject <SSXPCCoding, NSCopying>
{
    NSString *_cancelLabel;	// 8 = 0x8
    NSString *_reason;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000bea69
@property(copy) NSString *title; // @synthesize title=_title;
@property(copy) NSString *reason; // @synthesize reason=_reason;
@property(copy) NSString *cancelLabel; // @synthesize cancelLabel=_cancelLabel;
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x00000000000be901
- (id)copyXPCEncoding;	// IMP=0x00000000000be8a8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000be811

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

