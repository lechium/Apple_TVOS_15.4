//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICSTokenizer, NSData;

@interface ICSParser : NSObject
{
    unsigned long long _options;	// 8 = 0x8
    ICSTokenizer *_lexer;	// 16 = 0x10
    NSData *_data;	// 24 = 0x18
}

+ (id)entitiesFromNSData:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000021a92
- (void).cxx_destruct;	// IMP=0x0000000000021f5f
@property(readonly, nonatomic) ICSTokenizer *lexer; // @synthesize lexer=_lexer;
- (id)parseData;	// IMP=0x0000000000021984
- (void)_parseComponent:(id)arg1 depth:(unsigned long long)arg2 fatalError:(_Bool *)arg3;	// IMP=0x000000000002151c
- (void)_parseComponent:(id)arg1;	// IMP=0x00000000000214f7
- (_Bool)parseProperty:(id)arg1;	// IMP=0x0000000000020e30
- (_Bool)createPropertyType:(int)arg1 component:(id)arg2 withName:(id)arg3;	// IMP=0x000000000001f93c
- (void)parseParameter:(id)arg1;	// IMP=0x000000000001f8a6
- (id)makeComponent:(const char *)arg1;	// IMP=0x000000000001f6bc
- (id)initWithData:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000001f61c

@end

