//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SFSiriWordTimingInfo : NSObject
{
    NSString *_localizedText;	// 8 = 0x8
    double _timeOffset;	// 16 = 0x10
    NSString *_wordID;	// 24 = 0x18
    struct _NSRange _textRange;	// 32 = 0x20
}

+ (id)timingInfoArrayWithSerializableArray:(id)arg1;	// IMP=0x0000000000110a56
+ (id)serializableArrayWithTimingInfoArray:(id)arg1;	// IMP=0x00000000001108ac
- (void).cxx_destruct;	// IMP=0x0000000000110e7e
@property(copy, nonatomic) NSString *wordID; // @synthesize wordID=_wordID;
@property(nonatomic) struct _NSRange textRange; // @synthesize textRange=_textRange;
@property(nonatomic) double timeOffset; // @synthesize timeOffset=_timeOffset;
@property(copy, nonatomic) NSString *localizedText; // @synthesize localizedText=_localizedText;
- (id)dictionary;	// IMP=0x0000000000110ce7
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000110c27

@end
