//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, VUIAction;

__attribute__((visibility("hidden")))
@interface VUIActionAlert
{
    NSString *_title;	// 8 = 0x8
    NSString *_descriptionString;	// 16 = 0x10
    NSString *_dismissButtonTitle;	// 24 = 0x18
    VUIAction *_cancelAction;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000f5562
@property(retain, nonatomic) VUIAction *cancelAction; // @synthesize cancelAction=_cancelAction;
@property(retain, nonatomic) NSString *dismissButtonTitle; // @synthesize dismissButtonTitle=_dismissButtonTitle;
@property(retain, nonatomic) NSString *descriptionString; // @synthesize descriptionString=_descriptionString;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)performWithTargetResponder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000f52c6
- (id)initWithContextData:(id)arg1 appContext:(id)arg2;	// IMP=0x00000000000f50c8

@end
