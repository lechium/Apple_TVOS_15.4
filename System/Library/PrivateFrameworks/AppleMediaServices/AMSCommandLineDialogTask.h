//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AMSDialogRequest;

@interface AMSCommandLineDialogTask
{
    AMSDialogRequest *_request;	// 8 = 0x8
    double _maximumDialogWidth;	// 16 = 0x10
    double _minimumDialogWidth;	// 24 = 0x18
    double _dialogPadding;	// 32 = 0x20
    long long _automaticButtonSelection;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000df207
@property(nonatomic) long long automaticButtonSelection; // @synthesize automaticButtonSelection=_automaticButtonSelection;
@property(nonatomic) double dialogPadding; // @synthesize dialogPadding=_dialogPadding;
@property(nonatomic) double minimumDialogWidth; // @synthesize minimumDialogWidth=_minimumDialogWidth;
@property(nonatomic) double maximumDialogWidth; // @synthesize maximumDialogWidth=_maximumDialogWidth;
@property(readonly, nonatomic) AMSDialogRequest *request; // @synthesize request=_request;
- (void)_printMessage:(id)arg1;	// IMP=0x00000000000df0ef
- (id)_getUserInput;	// IMP=0x00000000000df014
- (id)_gatherTextfieldInput;	// IMP=0x00000000000dea61
- (long long)_gatherButtonInput;	// IMP=0x00000000000de888
- (id)_createTextfieldWithTextfield:(id)arg1 width:(long long)arg2;	// IMP=0x00000000000de5c1
- (id)_createText:(id)arg1 width:(long long)arg2 centered:(_Bool)arg3 omitLeftPipe:(_Bool)arg4;	// IMP=0x00000000000de182
- (id)_createLinesFromText:(id)arg1 width:(long long)arg2;	// IMP=0x00000000000ddb67
- (id)_createHorizontolLineWithWidth:(long long)arg1;	// IMP=0x00000000000ddaf2
- (id)present;	// IMP=0x00000000000dc51f
- (id)initWithRequest:(id)arg1;	// IMP=0x00000000000dc463

@end
