//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface PatternExecutionDialog : NSObject
{
    NSString *_dialogId;	// 8 = 0x8
    NSString *_groupName;	// 16 = 0x10
    NSString *_fullPrint;	// 24 = 0x18
    NSString *_fullSpeak;	// 32 = 0x20
    NSString *_supportingPrint;	// 40 = 0x28
    NSString *_supportingSpeak;	// 48 = 0x30
    NSNumber *_printOnly;	// 56 = 0x38
    NSNumber *_spokenOnly;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000007e1ae
@property(retain, nonatomic) NSNumber *spokenOnly; // @synthesize spokenOnly=_spokenOnly;
@property(retain, nonatomic) NSNumber *printOnly; // @synthesize printOnly=_printOnly;
@property(retain, nonatomic) NSString *supportingSpeak; // @synthesize supportingSpeak=_supportingSpeak;
@property(retain, nonatomic) NSString *supportingPrint; // @synthesize supportingPrint=_supportingPrint;
@property(retain, nonatomic) NSString *fullSpeak; // @synthesize fullSpeak=_fullSpeak;
@property(retain, nonatomic) NSString *fullPrint; // @synthesize fullPrint=_fullPrint;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(retain, nonatomic) NSString *dialogId; // @synthesize dialogId=_dialogId;

@end

