//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;

@interface PKTextFieldTableViewSettingsRowFormatter : NSObject
{
    NSSet *_formatPaddingCharacters;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000206083
@property(copy, nonatomic) NSSet *formatPaddingCharacters; // @synthesize formatPaddingCharacters=_formatPaddingCharacters;
- (id)submissionValueFromFormattedInput:(id)arg1;	// IMP=0x0000000000205ea2
- (id)formattedValueFromInput:(id)arg1;	// IMP=0x0000000000205e8c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000205e2a
- (unsigned long long)hash;	// IMP=0x0000000000205dd7

@end

