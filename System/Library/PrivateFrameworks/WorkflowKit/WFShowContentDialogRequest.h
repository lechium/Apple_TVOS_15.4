//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/NSSecureCoding-Protocol.h>

@class NSData, WFContentCollection, WFDialogButton;

@interface WFShowContentDialogRequest <NSSecureCoding>
{
    WFDialogButton *_doneButton;	// 8 = 0x8
    NSData *_archivedContentCollection;	// 16 = 0x10
    WFContentCollection *_cachedContentCollection;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000b13b4
- (void).cxx_destruct;	// IMP=0x00000000000b11b3
@property(retain, nonatomic) WFContentCollection *cachedContentCollection; // @synthesize cachedContentCollection=_cachedContentCollection;
@property(copy, nonatomic) NSData *archivedContentCollection; // @synthesize archivedContentCollection=_archivedContentCollection;
@property(readonly, copy, nonatomic) WFDialogButton *doneButton; // @synthesize doneButton=_doneButton;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000b1087
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000b0f85
- (id)description;	// IMP=0x00000000000b0e77
- (void)getContentCollectionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b0c51
- (id)initWithContentCollection:(id)arg1 attribution:(id)arg2 prompt:(id)arg3;	// IMP=0x00000000000b0a9a

@end
