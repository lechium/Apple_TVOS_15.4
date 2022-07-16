//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TIWordTokenizer : NSObject
{
    NSString *m_string;	// 8 = 0x8
    struct {
        unsigned short buffer[64];
        struct __CFString *theString;
        unsigned short *directUniCharBuffer;
        char *directCStringBuffer;
        struct {
            long long location;
            long long length;
        } rangeToBuffer;
        long long bufferedRangeStart;
        long long bufferedRangeEnd;
    } m_inlineBuffer;	// 16 = 0x10
    struct _NSRange m_tokenRange;	// 200 = 0xc8
    struct _NSRange m_searchRange;	// 216 = 0xd8
    unsigned long long m_bufferOffset;	// 232 = 0xe8
}

- (void).cxx_destruct;	// IMP=0x000000000005fe7a
- (id)allTokensForString:(id)arg1;	// IMP=0x000000000005fd6c
- (struct _NSRange)rangeOfCurrentToken;	// IMP=0x000000000005fd58
- (struct _NSRange)advanceToNextToken;	// IMP=0x000000000005f971
- (void)setString:(id)arg1 withSearchRange:(struct _NSRange)arg2;	// IMP=0x000000000005f7e0
- (id)init;	// IMP=0x000000000005f784

@end

