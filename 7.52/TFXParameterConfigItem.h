//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TFXParameterConfigItem : NSObject
{
    _Bool _isDefault;
    _Bool _shouldSave;
    NSString *_name;
    NSString *_stringValue;
}

@property _Bool shouldSave; // @synthesize shouldSave=_shouldSave;
@property _Bool isDefault; // @synthesize isDefault=_isDefault;
@property(copy) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end
