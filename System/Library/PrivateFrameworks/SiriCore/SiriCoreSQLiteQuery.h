//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SiriCoreSQLiteStatement;
@protocol SiriCoreSQLiteRecordBuilder;

@interface SiriCoreSQLiteQuery : NSObject
{
    NSString *_string;	// 8 = 0x8
    SiriCoreSQLiteStatement *_statement;	// 16 = 0x10
    NSArray *_parameters;	// 24 = 0x18
    id <SiriCoreSQLiteRecordBuilder> _recordBuilder;	// 32 = 0x20
    unsigned long long _options;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000027982
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) id <SiriCoreSQLiteRecordBuilder> recordBuilder; // @synthesize recordBuilder=_recordBuilder;
@property(readonly, copy, nonatomic) NSArray *parameters; // @synthesize parameters=_parameters;
@property(readonly, nonatomic) SiriCoreSQLiteStatement *statement; // @synthesize statement=_statement;
@property(readonly, copy, nonatomic) NSString *string; // @synthesize string=_string;
- (id)description;	// IMP=0x0000000000027757
- (id)initWithString:(id)arg1 statement:(id)arg2 parameters:(id)arg3 recordBuilder:(id)arg4 options:(unsigned long long)arg5;	// IMP=0x000000000002764e

@end

