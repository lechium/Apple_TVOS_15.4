//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol WFOSAScriptEditorParameterDelegate;

@interface WFOSAScriptEditorParameter
{
    NSString *_languageName;	// 8 = 0x8
    id <WFOSAScriptEditorParameterDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001198d5
@property(nonatomic) __weak id <WFOSAScriptEditorParameterDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *languageName; // @synthesize languageName=_languageName;
- (Class)singleStateClass;	// IMP=0x0000000000119886
- (id)initWithDefinition:(id)arg1;	// IMP=0x00000000001196ab

@end
